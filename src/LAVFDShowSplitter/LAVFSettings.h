/*
 *      Copyright (C) 2010 Hendrik Leppkes
 *      http://www.1f0.de
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 */

#pragma once

#include <Unknwn.h>       // IUnknown and GUID Macros

// GUID: 72b2c5fa-a7a5-4463-9c1b-9f4749c35c79
DEFINE_GUID(IID_ILAVFSettings, 0x72b2c5fa, 0xa7a5, 
0x4463, 0x9c, 0x1b, 0x9f, 0x47, 0x49, 0xc3, 0x5c, 0x79);

interface ILAVFSettings : public IUnknown
{
  // Retrieve the preferred languages as ISO 639-2 language codes, comma seperated
  // If the result is NULL, no language has been set
  HRESULT GetPreferredLanguages(char **languages);

  // Set the preferred languages as ISO 639-2 language codes, comma seperated
  // To reset to no preferred language, pass NULL or the empty string
  HRESULT SetPreferredLanguages(char *languages);
  
  // Retrieve the preferred subtitle languages as ISO 639-2 language codes, comma seperated
  // If the result is NULL, no language has been set
  // If no subtitle language is set, the main language preference is used.
  HRESULT GetPreferredSubtitleLanguages(char **languages);

  // Set the preferred subtitle languages as ISO 639-2 language codes, comma seperated
  // To reset to no preferred language, pass NULL or the empty string
  // If no subtitle language is set, the main language preference is used.
  HRESULT SetPreferredSubtitleLanguages(char *languages);
};
