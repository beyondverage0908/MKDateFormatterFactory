//
//  MKDateFormatterFactory.h
//  MKDateFormatterFactory
//
//  Created by pingjun lin on 2017/12/12.
//  Copyright © 2018年 MK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MKDateFormatterFactory : NSObject <NSCacheDelegate> {
    
    NSCache *loadedDataFormatters;
    
}

@property (nonatomic, assign) NSUInteger cacheLimit;//default is 5

+ (MKDateFormatterFactory *)sharedFactory;

// custom Style
- (NSDateFormatter *)dateFormatterWithFormat:(NSString *)format andLocale:(NSLocale *)locale;
- (NSDateFormatter *)dateFormatterWithFormat:(NSString *)format andLocaleIdentifier:(NSString *)localeIdentifier;
- (NSDateFormatter *)dateFormatterWithFormat:(NSString *)format;

// system style
- (NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)dateStyle timeStyle:(NSDateFormatterStyle)timeStyle andLocale:(NSLocale *)locale;
- (NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)dateStyle timeStyle:(NSDateFormatterStyle)timeStyle andLocaleIdentifier:(NSString *)localeIdentifier;
- (NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)dateStyle andTimeStyle:(NSDateFormatterStyle)timeStyle;

@end
