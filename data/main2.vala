using Cairo;
using Pango;

int main ( string[] args )
{
	Gtk.init (ref args);

	// Initial Settings
	var window = new Gtk.Window();
	window.title = "Focus";
	window.set_border_width(12);
	window.set_position(Gtk.WindowPosition.CENTER);
	window.set_default_size(450, 80);
	window.destroy.connect(Gtk.main_quit);

	// Adding a grid
	var grid = new Gtk.Grid();
	// spacing around
	grid.row_spacing = 6;
	// this will make the objects to stacks on top of each other
	grid.orientation = Gtk.Orientation.VERTICAL;
	// adding a element

	var font_desc = new Pango.FontDescription();
  font_desc.set_family("Source Code Pro");

	var label = new Gtk.Label("Focus");
	grid.add(label);

	window.add(grid);
	window.show_all();


	Gtk.main();

	return 0;

}