//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface _TtC6Tinder22AnalyticsConfiguration : NSObject
{
    // Error parsing type: , name: baseURL
    // Error parsing type: , name: timeInterval
    // Error parsing type: , name: maxBatchItems
    // Error parsing type: , name: maxSize
    // Error parsing type: , name: batchingEnabled
    // Error parsing type: , name: archiveEnabled
    // Error parsing type: , name: retries
    // Error parsing type: , name: networkService
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithBaseURL:(id)arg1 stacks:(_Bool)arg2;
- (id)initWithBaseURL:(id)arg1;
@property(nonatomic, readonly) long long retries; // @synthesize retries;
@property(nonatomic, readonly) _Bool archiveEnabled; // @synthesize archiveEnabled;
@property(nonatomic, readonly) _Bool batchingEnabled; // @synthesize batchingEnabled;
@property(nonatomic, readonly) long long maxSize; // @synthesize maxSize;
@property(nonatomic, readonly) long long maxBatchItems; // @synthesize maxBatchItems;
@property(nonatomic, readonly) double timeInterval; // @synthesize timeInterval;
@property(nonatomic, readonly) NSURL *baseURL; // @synthesize baseURL;

@end

