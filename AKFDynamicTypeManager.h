//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol AKFDynamicTypeManagerDelegate;

@interface AKFDynamicTypeManager : NSObject
{
    _Bool _isObserving;
    NSMapTable *_boldMap;
    NSMapTable *_fontSizeMap;
    NSMapTable *_monospacedMap;
    id <AKFDynamicTypeManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <AKFDynamicTypeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_fontScale;
- (id)_fontForView:(id)arg1;
- (void)_ensureObserver;
- (_Bool)_dynamicTypeEnabled;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)setFontOfSize:(double)arg1 isBold:(_Bool)arg2 isMonospaced:(_Bool)arg3 forView:(id)arg4;
- (void)setFontOfSize:(double)arg1 isBold:(_Bool)arg2 forView:(id)arg3;
- (void)dealloc;
- (id)init;

@end

