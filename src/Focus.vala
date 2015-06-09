using Gtk;

public class FocusApp : Gtk.Window
{

    public FocusApp() 
    {

        Gtk.Settings.get_default ().gtk_application_prefer_dark_theme = true;
        this.title = "Focus";
        this.set_border_width (10);
        this.set_position (Gtk.WindowPosition.CENTER);

        this.set_default_size (500, 700);
        this.destroy.connect (Gtk.main_quit);

        var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 10);
        this.add(box);

        var label = new Gtk.Label ("<span size='17000'>Focus</span>");
        label.set_use_markup(true);
        box.add (label);

        // Our insert
        var entry = new Entry();
        // Placeholder text
        entry.set_placeholder_text("What are you doing?");
        // Icon on the secondary position (right)
        entry.set_icon_from_icon_name(Gtk.EntryIconPosition.SECONDARY, "media-playback-start");
        // Our tooltip
        entry.set_tooltip_text("Just Press Enter to insert!");
        box.add(entry);

        // SourceList demo
        // box.add(pane);

        var result = new Label("Results");

        // Here it comes all the fuck
        var listBox = new ListBox();

        entry.activate.connect (() => {
            result.label = entry.get_text();
            entry.set_text("");
            box.pack_start(result);
        });

        listBox.prepend(new Label("Wow"));
        box.pack_start(listBox);


    }
}

static int main(string[] args) {
    Gtk.init(ref args);

    FocusApp win = new FocusApp();
    win.show_all();

    Gtk.main();
    return 0;
}