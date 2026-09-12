#include <gtkmm.h>

int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create("com.example.app");

    Gtk::Window window;
    window.set_title("My App");
    window.set_default_size(400, 300);

    return app->run(window);
}
