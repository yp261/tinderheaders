//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, TNDRMetaUser;

@interface TNDRMetaData : NSObject
{
    NSDictionary *_dictionary;
    TNDRMetaUser *_metaUser;
}

@property(retain, nonatomic) TNDRMetaUser *metaUser; // @synthesize metaUser=_metaUser;
@property(copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

