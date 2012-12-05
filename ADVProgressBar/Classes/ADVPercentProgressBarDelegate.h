//
//  ADVPercentProgressBarDelegate.h
//  ADVProgressBar
//
//  Created by Campbell Gray on 2012-12-05.
//
//

#import <Foundation/Foundation.h>

@protocol ADVPercentProgressBarDelegate <NSObject>

@optional

- (NSString*)textForBarAtPercent:(CGFloat)percent;

@end
