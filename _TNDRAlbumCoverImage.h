//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, TNDRAlbum, TNDRAlbumCoverImageID;

@interface _TNDRAlbumCoverImage : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveWidthValue:(short)arg1;
- (short)primitiveWidthValue;
@property short widthValue;
- (void)setPrimitiveHeightValue:(short)arg1;
- (short)primitiveHeightValue;
@property short heightValue;
@property(readonly, nonatomic) TNDRAlbumCoverImageID *objectID;

// Remaining properties
@property(retain, nonatomic) TNDRAlbum *album; // @dynamic album;
@property(retain, nonatomic) NSNumber *height; // @dynamic height;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSNumber *width; // @dynamic width;

@end

