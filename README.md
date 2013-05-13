# RMSkinnedView

This subclass of NSView uses a NSImage as pattern or a NSColor to fill its background. The view will be filled using **NSCompositeSourceOver**, so that layers beneath it stay visible when using transparency effects.

![RMSkinnedView Preview](https://github.com/raffael/RMSkinnedView/blob/master/preview.png?raw=true "Custom NSView subclass with background image")

The core feature of **RMSkinnedWindow** is the ability to define certain properties directly in the Interface builder, which reduces the amount of code required to build beautiful applications. To do this, drag a new ```NSView``` to your UI and choose ```RMSkinnedView``` as its class. In the same view of Interface Builder (Identity Inspector), add properties according to the following rules to the **User Defined Runtime Attributes**.

* **backgroundPatternImageName (STRING)** The name of the image in your ressources you want to use as a background pattern for the view. The image can contain transparency effects. The image will be loaded using ```[NSImage imageNamed:];```. A specified color will be ignored if the pattern image exists.

* **offsetString (STRING)** A string defining a two-dimensional offset for the background pattern drawing. Since the pattern depends on the window's size, you just have to code-and-try until it fits your needs!

* **colorString (STRING)** An RGBa string that defines the color you want to use, if you do not want to make use of pattern images. The format of the RGBa string is ```[0-255][0-255][0-255][0.0-1.0]```, e.g. ```255,128,0,0.5```. The color will be ignored if a pattern image has been set.

* **cornerRadius (NUMBER)** A number defining the radius for all four corners of the View. You have to enable each corner manually using the following settings.

* **roundedTopLeft (BOOL)**, **roundedTopRight (BOOL)**, **roundedBottomLeft (BOOL)**, **roundedBottomRight (BOOL)** Flags to enable corner-wise the rounded corners.

Example:

![RMSkinnedView Settings](https://github.com/raffael/RMSkinnedView/blob/master/settings.png?raw=true "Custom NSView subclass with background image and its settings in Interface Builder")

## Scenario

Often, one would have to subclass NSView to give it a custom background pattern image and keep a reference to the NSView instance to set the image. With this class, one can simply define the image path (as you would with ```+(NSImage *) imageNamed:;)``` in the Interface Builder object properties.

In our projects, we often use RMSkinnedView as the Title Bar view of *INAppStoreWindow* windows. The top left and the top right radius allows as to perfectly match the window's corner radius.

## Usage

Usage should be clear once you see the annotated header file.

## Contact

* Raffael Hannemann
* [@raffael_me](http://www.twitter.com/raffael_me/)
* http://www.raffael.me/

## License

Copyright (c) 2013 Raffael Hannemann
Under BSD License.

## Want more?

Follow [@raffael_me](http://www.twitter.com/raffael_me/) for similar releases.
