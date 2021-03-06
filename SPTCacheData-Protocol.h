//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL;

@protocol SPTCacheData <NSObject>
@property(nonatomic) unsigned long long totalSize;
@property(retain, nonatomic) NSData *data;
@property(nonatomic) unsigned long long offset;
@property(retain, nonatomic) NSString *itemID;
@property(retain, nonatomic) NSURL *URI;
@end

