
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Sun, 14 Nov 2021 20:28:49 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBaseWhite,
ColorBaseGrayLight,
ColorBaseGrayMedium,
ColorBaseGrayBlue,
ColorFontsPrimary,
ColorFontsSecondary,
ColorFontsTertiary,
ColorFontsHighlight,
ColorFontsPurple,
ColorFontsMint
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
