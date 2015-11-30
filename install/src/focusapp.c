/* focusapp.c generated by valac 0.28.1, the Vala compiler
 * generated from focusapp.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_FOCUS_APP (focus_app_get_type ())
#define FOCUS_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FOCUS_APP, FocusApp))
#define FOCUS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FOCUS_APP, FocusAppClass))
#define IS_FOCUS_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FOCUS_APP))
#define IS_FOCUS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FOCUS_APP))
#define FOCUS_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FOCUS_APP, FocusAppClass))

typedef struct _FocusApp FocusApp;
typedef struct _FocusAppClass FocusAppClass;
typedef struct _FocusAppPrivate FocusAppPrivate;
typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _Block2Data Block2Data;
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))

struct _FocusApp {
	GtkWindow parent_instance;
	FocusAppPrivate * priv;
};

struct _FocusAppClass {
	GtkWindowClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	FocusApp* self;
	GtkEntry* entry;
	GtkListBox* listBox;
};

struct _Block2Data {
	int _ref_count_;
	FocusApp* self;
	GtkLabel* label;
	GDateTime* now;
	gboolean working;
};


extern GtkCssProvider* custom_css;
GtkCssProvider* custom_css = NULL;
static gpointer focus_app_parent_class = NULL;

GType focus_app_get_type (void) G_GNUC_CONST;
enum  {
	FOCUS_APP_DUMMY_PROPERTY
};
FocusApp* focus_app_new (void);
FocusApp* focus_app_construct (GType object_type);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self);
static void __lambda4_ (Block1Data* _data1_);
static GtkListBoxRow* focus_app_addTask (FocusApp* self, const gchar* task, gboolean working);
static void ___lambda4__gtk_entry_activate (GtkEntry* _sender, gpointer self);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
static void __lambda5_ (Block2Data* _data2_);
static void ___lambda5__gtk_button_clicked (GtkButton* _sender, gpointer self);
static gboolean __lambda6_ (Block2Data* _data2_);
static gboolean ___lambda6__gsource_func (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		FocusApp* self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->listBox);
		_g_object_unref0 (_data1_->entry);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self) {
	gtk_main_quit ();
}


static void __lambda4_ (Block1Data* _data1_) {
	FocusApp* self;
	gchar* _result_ = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	GtkListBoxRow* row = NULL;
	GtkListBoxRow* _tmp2_ = NULL;
	self = _data1_->self;
	_tmp0_ = gtk_entry_get_text (_data1_->entry);
	_tmp1_ = g_strdup (_tmp0_);
	_result_ = _tmp1_;
	_tmp2_ = focus_app_addTask (self, _result_, TRUE);
	row = _tmp2_;
	gtk_list_box_prepend (_data1_->listBox, (GtkWidget*) row);
	gtk_entry_set_text (_data1_->entry, "");
	gtk_widget_show_all ((GtkWidget*) _data1_->listBox);
	_g_object_unref0 (row);
	_g_free0 (_result_);
}


static void ___lambda4__gtk_entry_activate (GtkEntry* _sender, gpointer self) {
	__lambda4_ (self);
}


FocusApp* focus_app_construct (GType object_type) {
	FocusApp * self = NULL;
	Block1Data* _data1_;
	GtkSettings* _tmp0_ = NULL;
	GtkBox* box = NULL;
	GtkBox* _tmp1_ = NULL;
	GtkLabel* label = NULL;
	GtkLabel* _tmp2_ = NULL;
	GtkStyleContext* _tmp3_ = NULL;
	GtkStyleContext* _tmp4_ = NULL;
	GtkEntry* _tmp5_ = NULL;
	GtkListBox* _tmp6_ = NULL;
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	self = (FocusApp*) g_object_new (object_type, NULL);
	_data1_->self = g_object_ref (self);
	_tmp0_ = gtk_settings_get_default ();
	g_object_set (_tmp0_, "gtk-application-prefer-dark-theme", TRUE, NULL);
	gtk_window_set_title ((GtkWindow*) self, "Focus");
	gtk_container_set_border_width ((GtkContainer*) self, (guint) 10);
	gtk_window_set_position ((GtkWindow*) self, GTK_WIN_POS_CENTER);
	gtk_window_set_default_size ((GtkWindow*) self, 500, 700);
	g_signal_connect ((GtkWidget*) self, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
	_tmp1_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 10);
	g_object_ref_sink (_tmp1_);
	box = _tmp1_;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) box);
	_tmp2_ = (GtkLabel*) gtk_label_new ("Focus App");
	g_object_ref_sink (_tmp2_);
	label = _tmp2_;
	_tmp3_ = gtk_widget_get_style_context ((GtkWidget*) label);
	gtk_style_context_add_class (_tmp3_, "h1");
	_tmp4_ = gtk_widget_get_style_context ((GtkWidget*) label);
	gtk_style_context_add_class (_tmp4_, "b");
	gtk_container_add ((GtkContainer*) box, (GtkWidget*) label);
	_tmp5_ = (GtkEntry*) gtk_entry_new ();
	g_object_ref_sink (_tmp5_);
	_data1_->entry = _tmp5_;
	gtk_entry_set_placeholder_text (_data1_->entry, "What are you doing?");
	gtk_entry_set_icon_from_icon_name (_data1_->entry, GTK_ENTRY_ICON_SECONDARY, "media-playback-start");
	gtk_widget_set_tooltip_text ((GtkWidget*) _data1_->entry, "Just Press Enter to insert!");
	gtk_widget_set_margin_top ((GtkWidget*) _data1_->entry, 20);
	gtk_widget_set_margin_start ((GtkWidget*) _data1_->entry, 20);
	gtk_widget_set_margin_end ((GtkWidget*) _data1_->entry, 20);
	gtk_widget_set_margin_bottom ((GtkWidget*) _data1_->entry, 10);
	gtk_buildable_set_name ((GtkBuildable*) _data1_->entry, "entry");
	gtk_container_add ((GtkContainer*) box, (GtkWidget*) _data1_->entry);
	_tmp6_ = (GtkListBox*) gtk_list_box_new ();
	g_object_ref_sink (_tmp6_);
	_data1_->listBox = _tmp6_;
	g_signal_connect_data (_data1_->entry, "activate", (GCallback) ___lambda4__gtk_entry_activate, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	gtk_box_pack_start (box, (GtkWidget*) _data1_->listBox, TRUE, TRUE, (guint) 0);
	_g_object_unref0 (label);
	_g_object_unref0 (box);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return self;
}


FocusApp* focus_app_new (void) {
	return focus_app_construct (TYPE_FOCUS_APP);
}


/**
     * addTask
     * A method to add Task
     *
     */
static Block2Data* block2_data_ref (Block2Data* _data2_) {
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void block2_data_unref (void * _userdata_) {
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		FocusApp* self;
		self = _data2_->self;
		_g_date_time_unref0 (_data2_->now);
		_g_object_unref0 (_data2_->label);
		_g_object_unref0 (self);
		g_slice_free (Block2Data, _data2_);
	}
}


static void __lambda5_ (Block2Data* _data2_) {
	FocusApp* self;
	gboolean _tmp0_ = FALSE;
	self = _data2_->self;
	_tmp0_ = _data2_->working;
	_data2_->working = !_tmp0_;
	g_print ("I was clicked");
}


static void ___lambda5__gtk_button_clicked (GtkButton* _sender, gpointer self) {
	__lambda5_ (self);
}


static gboolean __lambda6_ (Block2Data* _data2_) {
	FocusApp* self;
	gboolean result = FALSE;
	GDateTime* latest_time = NULL;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	GDateTime* _tmp3_ = NULL;
	GTimeSpan updated = 0LL;
	GDateTime* _tmp4_ = NULL;
	GDateTime* _tmp5_ = NULL;
	GTimeSpan _tmp6_ = 0LL;
	GTimeSpan _tmp7_ = 0LL;
	GDateTime* latest = NULL;
	GDateTime* _tmp8_ = NULL;
	GTimeSpan _tmp9_ = 0LL;
	GDateTime* _tmp10_ = NULL;
	GDateTime* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	gboolean _tmp14_ = FALSE;
	self = _data2_->self;
	_tmp0_ = g_date_time_get_year (_data2_->now);
	_tmp1_ = g_date_time_get_month (_data2_->now);
	_tmp2_ = g_date_time_get_day_of_month (_data2_->now);
	_tmp3_ = g_date_time_new_local (_tmp0_, _tmp1_, _tmp2_, 0, 0, 0.0);
	latest_time = _tmp3_;
	_tmp4_ = g_date_time_new_now_local ();
	_tmp5_ = _tmp4_;
	_tmp6_ = g_date_time_difference (_tmp5_, _data2_->now);
	_tmp7_ = _tmp6_;
	_g_date_time_unref0 (_tmp5_);
	updated = _tmp7_;
	_tmp8_ = latest_time;
	_tmp9_ = updated;
	_tmp10_ = g_date_time_add (_tmp8_, _tmp9_);
	latest = _tmp10_;
	_tmp11_ = latest;
	_tmp12_ = g_date_time_format (_tmp11_, "%T");
	_tmp13_ = _tmp12_;
	gtk_label_set_text (_data2_->label, _tmp13_);
	_g_free0 (_tmp13_);
	_tmp14_ = _data2_->working;
	if (_tmp14_ != FALSE) {
		result = TRUE;
		_g_date_time_unref0 (latest);
		_g_date_time_unref0 (latest_time);
		return result;
	} else {
		result = FALSE;
		_g_date_time_unref0 (latest);
		_g_date_time_unref0 (latest_time);
		return result;
	}
	_g_date_time_unref0 (latest);
	_g_date_time_unref0 (latest_time);
}


static gboolean ___lambda6__gsource_func (gpointer self) {
	gboolean result;
	result = __lambda6_ (self);
	return result;
}


static GtkListBoxRow* focus_app_addTask (FocusApp* self, const gchar* task, gboolean working) {
	GtkListBoxRow* result = NULL;
	Block2Data* _data2_;
	gboolean _tmp0_ = FALSE;
	GtkListBoxRow* row = NULL;
	GtkListBoxRow* _tmp1_ = NULL;
	GtkBox* box = NULL;
	GtkBox* _tmp2_ = NULL;
	GtkLabel* userTask = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	GtkLabel* _tmp8_ = NULL;
	GtkLabel* _tmp9_ = NULL;
	GtkLabel* _tmp10_ = NULL;
	GDateTime* _tmp11_ = NULL;
	GtkButton* action = NULL;
	GtkButton* _tmp12_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (task != NULL, NULL);
	_data2_ = g_slice_new0 (Block2Data);
	_data2_->_ref_count_ = 1;
	_data2_->self = g_object_ref (self);
	_tmp0_ = working;
	_data2_->working = _tmp0_;
	_tmp1_ = (GtkListBoxRow*) gtk_list_box_row_new ();
	g_object_ref_sink (_tmp1_);
	row = _tmp1_;
	_tmp2_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 10);
	g_object_ref_sink (_tmp2_);
	box = _tmp2_;
	_tmp3_ = task;
	_tmp4_ = g_strconcat ("<b>", _tmp3_, NULL);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_strconcat (_tmp5_, "</b>", NULL);
	_tmp7_ = _tmp6_;
	_tmp8_ = (GtkLabel*) gtk_label_new (_tmp7_);
	g_object_ref_sink (_tmp8_);
	_tmp9_ = _tmp8_;
	_g_free0 (_tmp7_);
	_g_free0 (_tmp5_);
	userTask = _tmp9_;
	gtk_label_set_use_markup (userTask, TRUE);
	gtk_container_add ((GtkContainer*) box, (GtkWidget*) userTask);
	_tmp10_ = (GtkLabel*) gtk_label_new ("");
	g_object_ref_sink (_tmp10_);
	_data2_->label = _tmp10_;
	_tmp11_ = g_date_time_new_now_local ();
	_data2_->now = _tmp11_;
	_tmp12_ = (GtkButton*) gtk_button_new_from_icon_name ("media-playback-pause", GTK_ICON_SIZE_BUTTON);
	g_object_ref_sink (_tmp12_);
	action = _tmp12_;
	g_signal_connect_data (action, "clicked", (GCallback) ___lambda5__gtk_button_clicked, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
	g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) 500, ___lambda6__gsource_func, block2_data_ref (_data2_), block2_data_unref);
	gtk_box_pack_end (box, (GtkWidget*) action, TRUE, TRUE, (guint) 0);
	gtk_box_pack_start (box, (GtkWidget*) _data2_->label, TRUE, TRUE, (guint) 0);
	gtk_box_set_homogeneous (box, TRUE);
	gtk_container_add ((GtkContainer*) row, (GtkWidget*) box);
	gtk_widget_set_margin_bottom ((GtkWidget*) row, 10);
	result = row;
	_g_object_unref0 (action);
	_g_object_unref0 (userTask);
	_g_object_unref0 (box);
	block2_data_unref (_data2_);
	_data2_ = NULL;
	return result;
}


static void focus_app_class_init (FocusAppClass * klass) {
	focus_app_parent_class = g_type_class_peek_parent (klass);
}


static void focus_app_instance_init (FocusApp * self) {
}


GType focus_app_get_type (void) {
	static volatile gsize focus_app_type_id__volatile = 0;
	if (g_once_init_enter (&focus_app_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FocusAppClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) focus_app_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FocusApp), 0, (GInstanceInitFunc) focus_app_instance_init, NULL };
		GType focus_app_type_id;
		focus_app_type_id = g_type_register_static (gtk_window_get_type (), "FocusApp", &g_define_type_info, 0);
		g_once_init_leave (&focus_app_type_id__volatile, focus_app_type_id);
	}
	return focus_app_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	FocusApp* win = NULL;
	FocusApp* _tmp0_ = NULL;
	gtk_init (&args_length1, &args);
	_tmp0_ = focus_app_new ();
	g_object_ref_sink (_tmp0_);
	win = _tmp0_;
	gtk_widget_show_all ((GtkWidget*) win);
	gtk_main ();
	result = 0;
	_g_object_unref0 (win);
	return result;
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	return _vala_main (argv, argc);
}



