//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, TNDRMatchmakerMatchID;

@interface _TNDRMatchmakerMatch : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)friendsSet;
- (void)setPrimitivePendingValue:(_Bool)arg1;
- (_Bool)primitivePendingValue;
@property _Bool pendingValue;
@property(readonly, nonatomic) TNDRMatchmakerMatchID *objectID;

// Remaining properties
@property(retain, nonatomic) NSDate *created; // @dynamic created;
@property(retain, nonatomic) NSSet *friends; // @dynamic friends;
@property(retain, nonatomic) NSString *matchID; // @dynamic matchID;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSNumber *pending; // @dynamic pending;

@end

