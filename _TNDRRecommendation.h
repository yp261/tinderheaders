//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, TNDRGroup, TNDRRecommendationID, TNDRUser;

@interface _TNDRRecommendation : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveSortNumberValue:(double)arg1;
- (double)primitiveSortNumberValue;
@property double sortNumberValue;
- (void)setPrimitiveRecTypeValue:(short)arg1;
- (short)primitiveRecTypeValue;
@property short recTypeValue;
- (void)setPrimitiveIsGroupMatchedValue:(_Bool)arg1;
- (_Bool)primitiveIsGroupMatchedValue;
@property _Bool isGroupMatchedValue;
@property(readonly, nonatomic) TNDRRecommendationID *objectID;

// Remaining properties
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) TNDRGroup *group; // @dynamic group;
@property(retain, nonatomic) NSNumber *isGroupMatched; // @dynamic isGroupMatched;
@property(retain, nonatomic) NSString *recSource; // @dynamic recSource;
@property(retain, nonatomic) NSNumber *recType; // @dynamic recType;
@property(retain, nonatomic) NSString *recommendationID; // @dynamic recommendationID;
@property(retain, nonatomic) TNDRUser *referrer; // @dynamic referrer;
@property(retain, nonatomic) NSNumber *sortNumber; // @dynamic sortNumber;
@property(retain, nonatomic) id teasers; // @dynamic teasers;
@property(retain, nonatomic) TNDRUser *user; // @dynamic user;

@end
