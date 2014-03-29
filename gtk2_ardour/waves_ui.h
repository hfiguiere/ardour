/*
	Copyright (C) 2014 Valeriy Kamyshniy

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#include <string>
#include <fstream>
#include <boost/algorithm/string.hpp>
#include "gtkmm/box.h"
#include "gtkmm/layout.h"
#include "gtkmm/label.h"
#include "pbd/xml++.h"
#include "waves_button.h"

namespace WavesUI {
	double xml_property (const XMLNode& node, const char* prop_name, double default_value);
	int xml_property (const XMLNode& node, const char* prop_name, int default_value);
	bool xml_property (const XMLNode& node, const char* prop_name, bool default_value);
	std::string xml_property (const XMLNode& node, const char* prop_name, const std::string default_value);
	std::string xml_property (const XMLNode& node, const char* prop_name, const char* default_value);

	void create_ui (const XMLNodeList& definition, Gtk::Widget& root, std::map<std::string, Gtk::Widget*> &named_widgets);
	Gtk::Widget* create_widget (const XMLNode& definition, std::map<std::string, Gtk::Widget*> &named_widgets);
	Gtk::Widget* add_widget (Gtk::Box& parent, const XMLNode &definition, std::map<std::string, Gtk::Widget*> &named_widgets);
	Gtk::Widget* add_widget (Gtk::Layout& parent, const XMLNode &definition, std::map<std::string, Gtk::Widget*> &named_widgets);
	Gtk::Widget* add_widget (Gtk::Widget& parent, const XMLNode &definition, std::map<std::string, Gtk::Widget*> &named_widgets);

	extern std::ofstream dbg_out;
}