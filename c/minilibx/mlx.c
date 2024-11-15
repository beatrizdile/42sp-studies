# include <X11/X.h>
# include <X11/keysym.h>
# include <fcntl.h>
# include <mlx.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define WINDOW_WIDTH 600
# define WINDOW_HEIGHT 300
# define COWBOY "cowboy_front_64.xpm"

typedef struct s_data
{
    void	*mlx_ptr;
    void	*win_ptr;
    void	*img;
    int	    img_width;
    int	    img_height;
    int     x;
    int     y;
}	t_data;

int	handle_no_event(void *data)
{
    /* This function needs to exist, but it is useless for the moment */
    (void) data;
    return (0);
}

int	handle_keypress(int keysym, t_data *data)
{
    printf("Keypress: %d\n", keysym);
    (void) data;
    return (0);
}

int	handle_keyrelease(int keysym, t_data *data)
{
	if (keysym == XK_Escape)
    {
        mlx_destroy_image(data->mlx_ptr, data->img);
        mlx_destroy_window(data->mlx_ptr, data->win_ptr);
    }

    printf("Keyrelease: %d\n", keysym);
    return (0);
}

int	handle_x_press(t_data *data)
{
    mlx_destroy_image(data->mlx_ptr, data->img);
    mlx_destroy_window(data->mlx_ptr, data->win_ptr);
    return (0);
}

int	main(void)
{
    t_data	data;

    data.mlx_ptr = mlx_init();
    if (data.mlx_ptr == NULL)
        return (1);
    data.win_ptr = mlx_new_window(data.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "My first window!");
    if (data.win_ptr == NULL)
    {
        free(data.win_ptr);
        return (1);
    }

    data.x = 0;
    data.y = 0;
    data.img = mlx_xpm_file_to_image(data.mlx_ptr, COWBOY, &data.img_width, &data.img_height);
    mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, data.img, data.x, data.y);

    /* Setup hooks */ 
    mlx_loop_hook(data.mlx_ptr, &handle_no_event, &data); // call a function at the end of every loop
    mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &handle_keypress, &data); // call function at event
    mlx_hook(data.win_ptr, KeyRelease, KeyReleaseMask, &handle_keyrelease, &data); // call function at event
    mlx_hook(data.win_ptr, DestroyNotify, NoEventMask, &handle_x_press, &data);

    mlx_loop(data.mlx_ptr); // call all signals in a loop

    /* we will exit the loop if there's no window left, and execute this code */
    mlx_destroy_display(data.mlx_ptr); // kills connection to server, doesn't free
    free(data.mlx_ptr);
}

//-lmlx -lXext -lX11