# RMSkinnedView

This subclass of NSView uses a NSImage as pattern to fill its background.

In Interface Builder you can specify the property 'backgroundPatternImageName' to specify the image name of the view's background image without subclassing or referencing-and-setting it.

## Scenario

Often, one would have to subclass NSView to give it a custom background pattern image and keep a reference to the NSView instance to set the image. With this class, one can simply define the image path (as you would with +(NSImage *) imageNamed:;) in the Interface Builder object properties.

## Usage

Usage should be clear once you see the annotated header file.

## License

Under BSD License.