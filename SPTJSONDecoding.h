//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTJSONDecoding : NSObject
{
}

+ (id)SPObjectFromDecodedJSON:(id)arg1 collection:(id)arg2 error:(id *)arg3;
+ (id)SPObjectFromEncodedJSON:(id)arg1 collection:(id)arg2 error:(id *)arg3;
+ (id)partialSPObjectFromDecodedJSON:(id)arg1 error:(id *)arg2;
+ (id)partialSPObjectFromEncodedJSON:(id)arg1 error:(id *)arg2;
+ (id)SPObjectFromDecodedJSON:(id)arg1 error:(id *)arg2;
+ (id)SPObjectFromEncodedJSON:(id)arg1 error:(id *)arg2;
+ (void)registerPartialClass:(Class)arg1 forJSONType:(id)arg2;
+ (void)registerClass:(Class)arg1 forJSONType:(id)arg2;
+ (void)initialize;

@end

