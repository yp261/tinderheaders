//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, TNDRFriendID, TNDRMatch, TNDRMatchmakerMatch, TNDRUser;

@interface _TNDRFriend : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveRequestStatusValue:(int)arg1;
- (int)primitiveRequestStatusValue;
@property int requestStatusValue;
- (void)setPrimitiveOnTinderValue:(_Bool)arg1;
- (_Bool)primitiveOnTinderValue;
@property _Bool onTinderValue;
- (void)setPrimitiveMatchmakerMatchPendingValue:(_Bool)arg1;
- (_Bool)primitiveMatchmakerMatchPendingValue;
@property _Bool matchmakerMatchPendingValue;
@property(readonly, nonatomic) TNDRFriendID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *facebookID; // @dynamic facebookID;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(retain, nonatomic) NSString *fullName; // @dynamic fullName;
@property(retain, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) TNDRMatch *match; // @dynamic match;
@property(retain, nonatomic) TNDRMatchmakerMatch *matchmakerMatch; // @dynamic matchmakerMatch;
@property(retain, nonatomic) NSNumber *matchmakerMatchPending; // @dynamic matchmakerMatchPending;
@property(retain, nonatomic) NSNumber *onTinder; // @dynamic onTinder;
@property(retain, nonatomic) NSNumber *requestStatus; // @dynamic requestStatus;
@property(retain, nonatomic) NSString *tinderID; // @dynamic tinderID;
@property(retain, nonatomic) TNDRUser *user; // @dynamic user;
@property(retain, nonatomic) NSString *userID; // @dynamic userID;

@end

