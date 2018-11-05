//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol FBAdBrowserSessionDataGeneration <NSObject>
@property(readonly, nonatomic) long long loadFinishMs;
@property(readonly, nonatomic) long long scrollReadyMs;
@property(readonly, nonatomic) long long domContentLoadedMs;
@property(readonly, nonatomic) long long responseEndMs;
@property(readonly, nonatomic) long long loadStartMs;
@property(readonly, nonatomic) long long handlerTimeMs;
@property(readonly, copy, nonatomic) NSURL *url;
@property(readonly, copy, nonatomic) NSString *inlineClientToken;
@end

