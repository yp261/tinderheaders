//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, TNDRLocation, TNDRPopularLocationID;

@interface _TNDRPopularLocation : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)activeUserPhotosSet;
@property(readonly, nonatomic) TNDRPopularLocationID *objectID;

// Remaining properties
@property(retain, nonatomic) NSSet *activeUserPhotos; // @dynamic activeUserPhotos;
@property(retain, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) TNDRLocation *location; // @dynamic location;

@end

