#include <allegro5/allegro_image.h>
#include <allegro5\allegro.h>


	int main() {
		ALLEGRO_DISPLAY *display = NULL;
		al_init();
		al_init_image_addon();
		

		display = al_create_display(700, 500);
		//loads bitmaps
		ALLEGRO_BITMAP *dino = al_load_bitmap("unnamed.png");
		ALLEGRO_BITMAP *a = al_load_bitmap("thug-life-meme-matrix.jpeg");
	    ALLEGRO_BITMAP *b = al_load_bitmap("download (2).jpg");

		//render section////////////////
		al_clear_to_color(al_map_rgb(50, 10, 70));

		// the order of things are drawn in matter!
		al_draw_bitmap(dino, -11, 100, 0);
		al_draw_bitmap(a, 270, 205, 0);
		al_draw_bitmap(b, 400, 30, 0);

		al_flip_display(); // pause game

		al_rest(10);

		al_destroy_display;
}