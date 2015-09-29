using Gtk;
// using Granite;

public CssProvider custom_css;

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

        var label = new Gtk.Label("Focus");
        label.get_style_context().add_class ("h1");
        label.get_style_context().add_class ("b");

        box.add (label);

        // Our insert
        var entry = new Entry();
        // Placeholder text
        entry.set_placeholder_text("What are you doing?");
        // Icon on the secondary position (right)
        entry.set_icon_from_icon_name(Gtk.EntryIconPosition.SECONDARY, "media-playback-start");
        // Our tooltip
        entry.set_tooltip_text("Just Press Enter to insert!");
        // Our margins
        entry.set_margin_top(20);
        entry.set_margin_start(20);
        entry.set_margin_end(20);
        entry.set_margin_bottom(10);
        // entry.set_vexpand(true);
        entry.set_name("entry");
        // Add to box

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

        var userTask = new Gtk.Label ("<b>" + task + "</b>");
        userTask.set_use_markup(true);
        box.add(userTask);


            // TaskManager taskManager = new TaskManager();

            // task.startTask();

            // var date = taskManager.countTime();
            // date.format("%T")
            var label = new Label("");

            var now = new DateTime.now_local();


            var action = new Button.from_icon_name("media-playback-pause");


            action.clicked.connect (() => {
                // Emitted when the button has been activated:
                // self.loop_quit();
                // Attempt to create a flag to stop the timeout
                working = !working;
                // print("I was clicked");

            });


            GLib.Timeout.add(500, () => {

                // Create a placeholder DateTime, copying the year, month and day from our real time
                var latest_time = new DateTime.local(now.get_year(), now.get_month(), now.get_day_of_month(), 0, 0, 0.0);

                // Create an new Date and gets the seconds of diference between them
                var updated = new DateTime.now_local().difference(now);
                // Add to our result
                var latest = latest_time.add(updated);
                // Set the Text of Label
                label.set_text(latest.format("%T"));
                // This will make the thread go all the time, until reach stops
                // var self = this;
                // var flag = true;

                if(working != false){
                    return true;
                } else {
                    return false;
                }


            });

            box.pack_end(action, true);

            box.pack_start(label, true);

        // }


        box.set_homogeneous(true);

        row.add(box);

        row.set_margin_bottom(10);

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