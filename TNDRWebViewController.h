//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, TNDRWebViewNavigationBar, UIActivityIndicatorView, WKWebView;

@interface TNDRWebViewController : UIViewController <WKNavigationDelegate>
{
    TNDRWebViewNavigationBar *_navigationBar;
    WKWebView *_webView;
    UIActivityIndicatorView *_spinner;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) TNDRWebViewNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)showErrorAlert;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapDoneButton:(id)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)setupConstraints;
- (void)addSubviews;
- (void)showWebView;
- (void)hideWebView;
- (void)evaluateJavaScriptCommands:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaluateJavaScriptCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadURL:(id)arg1 withTitle:(id)arg2;
- (void)setup;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

