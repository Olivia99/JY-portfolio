
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Tue, 09 Nov 2021 22:52:46 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBaseWhite,
ColorBaseGrayLight,
ColorBaseGrayMedium,
ColorBaseGrayBlue,
ColorFontsPrimary,
ColorFontsSecondary,
ColorFontsTertiary
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
