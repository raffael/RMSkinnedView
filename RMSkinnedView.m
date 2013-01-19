//
//  RMSkinnedView.m
//
//  Created by Raffael Hannemann on 25.09.12.
//  Copyright (c) 2012 Raffael Hannemann. All rights reserved.
//

#import "RMSkinnedView.h"

@implementation RMSkinnedView

- (id)initWithFrame:(NSRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
    }
    
    return self;
}

- (void) awakeFromNib {
	if (self.backgroundPatternImageName) {
		self.backgroundPatternImage = [NSImage imageNamed:self.backgroundPatternImageName];
	}
}

- (void) setBackgroundPatternImageName:(NSString *)backgroundPatternImageName {
	_backgroundPatternImageName = backgroundPatternImageName;
	self.backgroundPatternImage = [NSImage imageNamed:self.backgroundPatternImageName];
}

- (void) setBackgroundPatternImage:(NSImage *)backgroundPatternImage {
	_backgroundPatternImage = backgroundPatternImage;
	patternColor = [NSColor colorWithPatternImage:self.backgroundPatternImage];
}

- (void)drawRect:(NSRect)rect {
	if (self.backgroundPatternImage==nil)
		return;
	[patternColor set];
	NSRectFill(self.frame);
}

@end
