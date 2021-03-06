//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIActivityIndicatorView, UILabel;

@interface ShowMoreFavCell : UIControl
{
    _Bool _tipsVisible;
    UILabel *label;
    UIActivityIndicatorView *loadingView;
    UILabel *tips;
}

@property(nonatomic) _Bool tipsVisible; // @synthesize tipsVisible=_tipsVisible;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView;
@property(retain, nonatomic) UILabel *label; // @synthesize label;
- (_Bool)isLoading;
- (void)setLoading:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

