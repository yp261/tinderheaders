//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, NSUUID;

@interface FBAdEvent : NSObject
{
    NSUUID *_eventId;
    NSString *_type;
    NSDate *_time;
    unsigned long long _priority;
    NSDictionary *_extraData;
    NSUUID *_tokenId;
    NSUUID *_sessionId;
    NSDate *_sessionStartTime;
    NSDate *_expiration;
}

+ (id)deserializeFromSqlite:(struct sqlite3_stmt *)arg1;
@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(copy, nonatomic) NSUUID *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSUUID *tokenId; // @synthesize tokenId=_tokenId;
@property(copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSUUID *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (void)logStatusMessage;
- (id)jsonExtraData;
- (id)initWithType:(id)arg1 withPriority:(unsigned long long)arg2 withTokenId:(id)arg3 withSessionId:(id)arg4 withSessionStartTime:(id)arg5 withExtraData:(id)arg6;

@end

