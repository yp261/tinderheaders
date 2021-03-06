//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TNDRStatusInfo : NSObject
{
    _Bool _isSelected;
    NSString *_statusText;
    NSString *_emoji;
    NSString *_tag;
    NSDate *_downloadDate;
}

@property(retain, nonatomic) NSDate *downloadDate; // @synthesize downloadDate=_downloadDate;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
- (void).cxx_destruct;
- (id)initWithStatusText:(id)arg1 emoji:(id)arg2 tag:(id)arg3;
- (id)initWithStatusDict:(id)arg1;

@end

