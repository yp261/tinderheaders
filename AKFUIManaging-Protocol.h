//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AKFTheme;
@protocol AKFAdvancedUIManager, AKFUIManager;

@protocol AKFUIManaging <NSObject>
- (void)setTheme:(AKFTheme *)arg1;
- (void)setAdvancedUIManager:(id <AKFAdvancedUIManager>)arg1;
@property(nonatomic, retain) id <AKFUIManager> uiManager;
@end

