//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseCoverView.h"

#import "QzoneJSBridgeDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURLRequest, QZCoverInfo, QZJsBridgeProxyController, UIImageView, UIWebView;

@interface QZWebCoverView : QZBaseCoverView <QzoneJSBridgeDelegate, UIWebViewDelegate>
{
    QZJsBridgeProxyController *_proxyController;
    UIImageView *_imageView;
    UIWebView *_webView;
    QZCoverInfo *_coverInfo;
    NSString *_existbgImageUrl;
    NSString *_currentBgImageUrl;
    _Bool _animationPaused;
    _Bool _defaultImageGetFail;
    NSURLRequest *_currentRequest;
    double _webviewStartTime;
    double _webviewFinishTime;
    double _pageStartTime;
    double _pageFinishTime;
    NSString *_qzoneShowUrl;
    long long _stage;
}

@property(nonatomic) long long stage; // @synthesize stage=_stage;
@property(retain, nonatomic) QZCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
