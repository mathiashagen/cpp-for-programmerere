#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Entry fornavn;
  Gtk::Label fornavnLabel;
  Gtk::Entry etternavn;
  Gtk::Label etternavnLabel;
  Gtk::Button button;
  Gtk::Label label;

  void checkUserInput() {
    if (fornavn.get_text() == "" || etternavn.get_text() == "") {
      button.set_sensitive(false);
      return;
    }
    button.set_sensitive(true);
  }

  Window() {
    button.set_sensitive(false);
    button.set_label("Combine names");
    fornavnLabel.set_label("First name");
    etternavnLabel.set_label("Last name");

    vbox.pack_start(fornavnLabel);
    vbox.pack_start(fornavn); //Add the widget entry to vbox
    vbox.pack_start(etternavnLabel);
    vbox.pack_start(etternavn);
    vbox.pack_start(button); //Add the widget button to vbox
    vbox.pack_start(label);  //Add the widget label to vbox

    add(vbox);  //Add vbox to window
    show_all(); //Show all widgets

    fornavn.signal_changed().connect([this]() {
      checkUserInput();
    });

    etternavn.signal_changed().connect([this]() {
      checkUserInput();
    });

    button.signal_clicked().connect([this]() {
      label.set_text(fornavn.get_text() + " " + etternavn.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  window.set_title("Øving 4");
  gtk_main.run(window);
}
