//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "TNDRURLNavigableProtocol-Protocol.h"

@class NSArray, NSString;
@protocol UIViewControllerAnimatedTransitioning;

@interface TNDROSSLicensesTVC : UITableViewController <TNDRURLNavigableProtocol>
{
    NSArray *_licenses;
}

+ (id)viewControllerNavigationKey;
@property(retain, nonatomic) NSArray *licenses; // @synthesize licenses=_licenses;
- (void).cxx_destruct;
- (void)loadLicenses;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

