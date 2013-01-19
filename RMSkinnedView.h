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

/** Sets the path file for the new pattern image, loads the pattern image immediately.
 @param backgroundPatternImage The image filename in the resources to be used as background pattern.
 */
@property (retain) NSImage *backgroundPatternImage;

/** Sets the new pattern image.
 @param backgroundPatternImage The image to be used as background pattern.
 */
@property (retain,nonatomic) NSString *backgroundPatternImageName;

@end
