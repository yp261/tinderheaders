//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, TNDRPhoto, TNDRProcessedPhotoID;

@interface _TNDRProcessedPhoto : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveWidthValue:(float)arg1;
- (float)primitiveWidthValue;
@property float widthValue;
- (void)setPrimitiveHeightValue:(float)arg1;
- (float)primitiveHeightValue;
@property float heightValue;
@property(readonly, nonatomic) TNDRProcessedPhotoID *objectID;

// Remaining properties
@property(retain, nonatomic) NSNumber *height; // @dynamic height;
@property(retain, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) TNDRPhoto *photo; // @dynamic photo;
@property(retain, nonatomic) NSNumber *width; // @dynamic width;

@end
