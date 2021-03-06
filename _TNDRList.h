//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, TNDRListID;

@interface _TNDRList : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)matchesSet;
- (void)setPrimitiveOrderValue:(short)arg1;
- (short)primitiveOrderValue;
@property short orderValue;
@property(readonly, nonatomic) TNDRListID *objectID;

// Remaining properties
@property(retain, nonatomic) NSDate *created; // @dynamic created;
@property(retain, nonatomic) NSDate *lastActivity; // @dynamic lastActivity;
@property(retain, nonatomic) NSString *listID; // @dynamic listID;
@property(retain, nonatomic) NSSet *matches; // @dynamic matches;
@property(retain, nonatomic) NSNumber *order; // @dynamic order;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

