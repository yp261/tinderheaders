//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSNumber, NSSet, NSString, TNDRFriend, TNDRFriendRequest, TNDRGoingOutStatus, TNDRGroup, TNDRMatchID, TNDRUser;

@interface _TNDRMatch : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)messagesSet;
- (id)listsSet;
- (id)allMembersSet;
- (void)setPrimitiveViewedValue:(_Bool)arg1;
- (_Bool)primitiveViewedValue;
@property _Bool viewedValue;
- (void)setPrimitiveSynchronizingValue:(_Bool)arg1;
- (_Bool)primitiveSynchronizingValue;
@property _Bool synchronizingValue;
- (void)setPrimitiveServerMessageCountValue:(short)arg1;
- (short)primitiveServerMessageCountValue;
@property short serverMessageCountValue;
- (void)setPrimitiveRequestedValue:(_Bool)arg1;
- (_Bool)primitiveRequestedValue;
@property _Bool requestedValue;
- (void)setPrimitiveNeedsSynchronizationValue:(_Bool)arg1;
- (_Bool)primitiveNeedsSynchronizationValue;
@property _Bool needsSynchronizationValue;
- (void)setPrimitiveMutedValue:(_Bool)arg1;
- (_Bool)primitiveMutedValue;
@property _Bool mutedValue;
- (void)setPrimitiveMatchmakerPendingValue:(_Bool)arg1;
- (_Bool)primitiveMatchmakerPendingValue;
@property _Bool matchmakerPendingValue;
- (void)setPrimitiveIsSuperLikeMatchValue:(_Bool)arg1;
- (_Bool)primitiveIsSuperLikeMatchValue;
@property _Bool isSuperLikeMatchValue;
- (void)setPrimitiveIsIndexedInSpotlightValue:(_Bool)arg1;
- (_Bool)primitiveIsIndexedInSpotlightValue;
@property _Bool isIndexedInSpotlightValue;
- (void)setPrimitiveIsFastMatchValue:(_Bool)arg1;
- (_Bool)primitiveIsFastMatchValue;
@property _Bool isFastMatchValue;
- (void)setPrimitiveIsExpiredValue:(_Bool)arg1;
- (_Bool)primitiveIsExpiredValue;
@property _Bool isExpiredValue;
- (void)setPrimitiveIsBoostMatchValue:(_Bool)arg1;
- (_Bool)primitiveIsBoostMatchValue;
@property _Bool isBoostMatchValue;
- (void)setPrimitiveGroupMatchValue:(_Bool)arg1;
- (_Bool)primitiveGroupMatchValue;
@property _Bool groupMatchValue;
- (void)setPrimitiveFollowingValue:(_Bool)arg1;
- (_Bool)primitiveFollowingValue;
@property _Bool followingValue;
@property(readonly, nonatomic) TNDRMatchID *objectID;

// Remaining properties
@property(retain, nonatomic) NSSet *allMembers; // @dynamic allMembers;
@property(retain, nonatomic) NSDate *created; // @dynamic created;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSNumber *following; // @dynamic following;
@property(retain, nonatomic) TNDRFriendRequest *friendRequest; // @dynamic friendRequest;
@property(retain, nonatomic) TNDRGoingOutStatus *goingOutStatus; // @dynamic goingOutStatus;
@property(retain, nonatomic) TNDRGroup *group; // @dynamic group;
@property(retain, nonatomic) NSNumber *groupMatch; // @dynamic groupMatch;
@property(retain, nonatomic) NSNumber *isBoostMatch; // @dynamic isBoostMatch;
@property(retain, nonatomic) NSNumber *isExpired; // @dynamic isExpired;
@property(retain, nonatomic) NSNumber *isFastMatch; // @dynamic isFastMatch;
@property(retain, nonatomic) NSNumber *isIndexedInSpotlight; // @dynamic isIndexedInSpotlight;
@property(retain, nonatomic) NSNumber *isSuperLikeMatch; // @dynamic isSuperLikeMatch;
@property(retain, nonatomic) NSDate *lastActivity; // @dynamic lastActivity;
@property(retain, nonatomic) NSSet *lists; // @dynamic lists;
@property(retain, nonatomic) NSString *matchID; // @dynamic matchID;
@property(retain, nonatomic) TNDRFriend *matchmaker; // @dynamic matchmaker;
@property(retain, nonatomic) NSString *matchmakerMessage; // @dynamic matchmakerMessage;
@property(retain, nonatomic) NSNumber *matchmakerPending; // @dynamic matchmakerPending;
@property(retain, nonatomic) NSString *messageDraft; // @dynamic messageDraft;
@property(retain, nonatomic) NSSet *messages; // @dynamic messages;
@property(retain, nonatomic) NSNumber *muted; // @dynamic muted;
@property(retain, nonatomic) NSDate *myExpiration; // @dynamic myExpiration;
@property(retain, nonatomic) TNDRGroup *myGroup; // @dynamic myGroup;
@property(retain, nonatomic) NSString *myGroupID; // @dynamic myGroupID;
@property(retain, nonatomic) id myGroupUserIDs; // @dynamic myGroupUserIDs;
@property(retain, nonatomic) NSNumber *needsSynchronization; // @dynamic needsSynchronization;
@property(retain, nonatomic) NSNumber *requested; // @dynamic requested;
@property(retain, nonatomic) NSNumber *serverMessageCount; // @dynamic serverMessageCount;
@property(retain, nonatomic) NSString *superLikeByID; // @dynamic superLikeByID;
@property(retain, nonatomic) NSNumber *synchronizing; // @dynamic synchronizing;
@property(retain, nonatomic) NSDate *theirExpiration; // @dynamic theirExpiration;
@property(retain, nonatomic) NSString *theirGroupID; // @dynamic theirGroupID;
@property(retain, nonatomic) id theirGroupUserIDs; // @dynamic theirGroupUserIDs;
@property(retain, nonatomic) NSDate *touched; // @dynamic touched;
@property(readonly, nonatomic) NSArray *unviewedMessages; // @dynamic unviewedMessages;
@property(retain, nonatomic) NSDate *updateDate; // @dynamic updateDate;
@property(retain, nonatomic) TNDRUser *user; // @dynamic user;
@property(retain, nonatomic) NSNumber *viewed; // @dynamic viewed;

@end
