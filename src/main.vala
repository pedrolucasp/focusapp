int main ( string[] args )
{
	Gtk.init (ref args);

	var window = new Gtk.Window();
	window.title = "Focus";
	window.set_border_width(0);
	window.set_position(Gtk.WindowPosition.CENTER);
	window.set_default_size(450, 80);
	window.destroy.connect(Gtk.main_quit);
	// Adding a button

	var label = new Gtk.Label("Focus");

	window.add(label);
	window.show_all();


	Gtk.main();

	return 0;

}