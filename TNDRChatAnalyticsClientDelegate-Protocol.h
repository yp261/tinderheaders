//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol TNDRChatAnalyticsClientDelegate
@property(readonly, nonatomic) _Bool matchSuperlikedUser;
@property(readonly, nonatomic) _Bool userSuperlikedMatch;
@property(readonly, nonatomic) long long matchType;
@property(readonly, nonatomic) long long otherMessageCount;
@property(readonly, nonatomic) long long myMessageCount;
@property(readonly, copy, nonatomic) NSString *lastMessageFrom;
@property(readonly, nonatomic) _Bool hasUnsentMessage;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, copy, nonatomic) NSString *otherID;
@property(readonly, copy, nonatomic) NSString *matchID;
@end
