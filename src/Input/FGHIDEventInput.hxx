// FGHIDEventInput.hxx -- handle event driven input devices via HIDAPI
//
// Written by James Turner
//
// Copyright (C) 2017, James Turner <zakalawe@mac.com>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//


#ifndef __FGHIDEVENTINPUT_HXX_
#define __FGHIDEVENTINPUT_HXX_

#include <memory>

#include "FGEventInput.hxx"

class FGHIDEventInput : public FGEventInput {
public:
  FGHIDEventInput();

  virtual ~FGHIDEventInput();
  
  void update(double dt) override;
  void init() override;
  void reinit() override;
  void postinit();
  void shutdown() override;

  static const char* subsystemName() { return "input-hid"; }
private:
  class FGHIDEventInputPrivate;
  
  std::unique_ptr<FGHIDEventInputPrivate> d;
};

#endif
