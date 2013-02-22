//
//  RMSkinnedView.h
//
//  Created by Raffael Hannemann on 25.09.12.
//  Copyright (c) 2012 Raffael Hannemann. All rights reserved.
//

// Under BSD License

/**
 * This subclass of NSView uses a NSImage as pattern to fill its background.
 *
 * In Interface Builder you can specify the property 'backgroundPatternImageName'
 * to specify the image name of the view's background image without subclassing or
 * referencing-and-setting it.
 */
#import <Cocoa/Cocoa.h>

@interface RMSkinnedView : NSView {
	NSColor *patternColor;
}

/** The image filename in the resources to be used as background pattern.
 */
@property (retain,nonatomic) NSImage *backgroundPatternImage;

/** The image to be used as background pattern.
 */
@property (retain,nonatomic) NSString *backgroundPatternImageName;

/** The color, which will be used if image not loaded */
@property (retain,nonatomic) NSColor *color;

/** The string for the color, which will be used if image not loaded */
@property (retain,nonatomic) NSString *colorString;

/** The string for the pattern offset. */
@property (retain,nonatomic) NSString *offsetString;
@property (assign,nonatomic) NSPoint patternOffset;

@property (retain) NSNumber *cornerRadius;
@property (assign) BOOL roundedTopLeft;
@property (assign) BOOL roundedTopRight;
@property (assign) BOOL roundedBottomLeft;
@property (assign) BOOL roundedBottomRight;

@end
