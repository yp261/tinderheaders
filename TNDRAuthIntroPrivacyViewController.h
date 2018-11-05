//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSString, UILabel, UITableView, UIView;

@interface TNDRAuthIntroPrivacyViewController : UIViewController <UITableViewDataSource>
{
    UIView *_lineView;
    UILabel *_headerLabel;
    UILabel *_subheaderLabel;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *subheaderLabel; // @synthesize subheaderLabel=_subheaderLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void).cxx_destruct;
- (void)updateType:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupConstraints;
- (void)addSubviews;
- (void)setup;
- (void)viewDidLoad;
@property(readonly, copy, nonatomic) NSArray *statements;
@property(readonly, nonatomic) double lineViewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

