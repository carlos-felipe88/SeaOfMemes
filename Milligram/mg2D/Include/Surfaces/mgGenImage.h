/*
  Copyright (C) 1995-2013 by Michael J. Goodfellow

  This source code is distributed for free and may be modified, redistributed, and
  incorporated in other projects (commercial, non-commercial and open-source)
  without restriction.  No attribution to the author is required.  There is
  no requirement to make the source code available (no share-alike required.)

  This source code is distributed "AS IS", with no warranty expressed or implied.
  The user assumes all risks related to quality, accuracy and fitness of use.

  Except where noted, this source code is the sole work of the author, but it has 
  not been checked for any intellectual property infringements such as copyrights, 
  trademarks or patents.  The user assumes all legal risks.  The original version 
  may be found at "http://www.sea-of-memes.com".  The author is not responsible 
  for subsequent alterations.

  Retain this copyright notice and add your own copyrights and revisions above
  this notice.
*/
#ifndef MGGENIMAGE_H
#define MGGENIMAGE_H

class mgGenSurface;

/*
  An RGBA image loaded from a file.  Images are created by an mgSurface instance,
  but are not retained resources and can be deleted.
*/
class mgGenImage : public mgImage
{
public:
  mgGenSurface* m_surface;
  void* m_handle;

  // constructor
  mgGenImage(
    mgGenSurface* surface)
  {
    m_surface = surface;
    m_handle = NULL;
  }

  // destructor
  virtual ~mgGenImage()
  {
    m_surface->deleteImage(this); 
    m_handle = NULL;
  }
};

#endif
