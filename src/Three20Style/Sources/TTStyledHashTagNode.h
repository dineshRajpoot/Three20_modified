//
//  TTStyledHashTagNode.h
//  Three20Style
//
//  Created by Jitesh Wadia on 25/07/13.
//
//

// Style
#import "Three20Style/TTStyledInline.h"

@interface TTStyledHashTagNode : TTStyledInline
{
    NSString    *_hashTag;
    BOOL        _highlighted;
}

@property (nonatomic)       BOOL      highlighted;
@property (nonatomic, copy) NSString *hashTag;

- (id)initWithHashTag:(NSString *)hashTag;
- (id)initWithHashTag:(NSString *)hashTag next:(TTStyledNode *)nextSibling;

// Designated initializer
- (id)initWithText:(NSString *)text hashTag:(NSString *)hashTag next:(TTStyledNode *)nextSibling;

@end
