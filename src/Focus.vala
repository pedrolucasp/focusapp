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

        // var result = new Label("Results");
        var listBox = new ListBox();

        entry.activate.connect (() => {
            var result = entry.get_text();

            var row = addTask(result, true);

            listBox.prepend(row);

            entry.set_text("");
            listBox.show_all();
        });

        box.pack_start(listBox);


    }

    /**
     * addTask
     * A method to add Task
     *
     */ 
    ListBoxRow addTask(string task, bool working = true){
        var row = new ListBoxRow();
        // Create a horizontal box with some spacing
        var box = new Box(Gtk.Orientation.HORIZONTAL, 10);

        box.add(new Label(task));

        if(working != false){
            box.pack_start(new Label("Working on that"), true);
        }

        box.pack_start(new Button.from_icon_name("media-playback-pause"), true);

        row.add(box);

        return row;
    }

}

static int main(string[] args) {
    Gtk.init(ref args);

    FocusApp win = new FocusApp();
    win.show_all();

    Gtk.main();
    return 0;
}