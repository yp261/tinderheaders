//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKFUIManager-Protocol.h"

@class AKFContentViewController, AKFDynamicTypeManager, AKFTheme, NSString, UIColor, UIImage;
@protocol AKFActionController;

@interface AKFSkinManager : NSObject <AKFUIManager>
{
    id <AKFActionController> _actionController;
    AKFDynamicTypeManager *_dynamicTypeManager;
    unsigned long long _skinType;
    UIColor *_primaryColor;
    UIImage *_backgroundImage;
    unsigned long long _backgroundTint;
    double _tintIntensity;
    AKFTheme *_theme;
    AKFContentViewController *_contentViewController;
}

@property(nonatomic) __weak AKFContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(copy, nonatomic) AKFTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) double tintIntensity; // @synthesize tintIntensity=_tintIntensity;
@property(readonly, nonatomic) unsigned long long backgroundTint; // @synthesize backgroundTint=_backgroundTint;
@property(readonly, copy, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) unsigned long long skinType; // @synthesize skinType=_skinType;
- (void).cxx_destruct;
- (void)_edit:(id)arg1;
- (void)_back:(id)arg1;
- (id)headerViewForState:(unsigned long long)arg1;
- (id)actionBarViewForState:(unsigned long long)arg1;
- (_Bool)_shouldShowActionBarBackButton:(unsigned long long)arg1;
- (double)_contentMinHeight;
- (id)_getDisabledColor:(id)arg1;
- (id)_getTintColor;
- (void)setPrimaryColor:(id)arg1;
- (void)setTintIntensity:(double)arg1;
- (void)setBackgroundTint:(unsigned long long)arg1;
- (void)setSkinType:(unsigned long long)arg1;
- (void)setActionController:(id)arg1;
- (id)dynamicTypeManager;
- (id)initWithSkinType:(unsigned long long)arg1;
- (id)initWithSkinType:(unsigned long long)arg1 primaryColor:(id)arg2;
- (id)initWithSkinType:(unsigned long long)arg1 primaryColor:(id)arg2 backgroundImage:(id)arg3 backgroundTint:(unsigned long long)arg4 tintIntensity:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

