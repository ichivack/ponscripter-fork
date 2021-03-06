/* -*- C++ -*-
 *
 *  PonscripterMessage.h - User message handling
 *
 *  Copyright (c) 2001-2008 Ogapee (original ONScripter, of which this
 *  is a fork).
 *
 *  ogapee@aqua.dti2.ne.jp
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307 USA
 */

#ifndef __PONSCRIPTER_MESSAGE_H__
#define __PONSCRIPTER_MESSAGE_H__

#define SEVERITY_BUFFER_LENGTH (20)
#include <SDL.h>

enum MessageType {
    Error,
    Warning,
    Note,
};

int PonscripterMessage(MessageType message_type, const char* title, const char* message, SDL_Window *screen = NULL);
//private:
int PonscripterFallbackMessage(MessageType message_type, const char* title, const char* message);

#endif // __PONSCRIPTER_MESSAGE_H__
