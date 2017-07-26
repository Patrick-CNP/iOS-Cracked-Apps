//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QLHTMLFontLabel, UIFont;

@interface QLHUDHtmlFontLabel : UIView
{
    NSString *_text;
    UIFont *_font;
    QLHTMLFontLabel *_htmlFontLabel;
    CDUnknownBlockType _interactBlock;
}

@property(copy, nonatomic) CDUnknownBlockType interactBlock; // @synthesize interactBlock=_interactBlock;
@property(retain, nonatomic) QLHTMLFontLabel *htmlFontLabel; // @synthesize htmlFontLabel=_htmlFontLabel;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)didClickedLabel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 font:(id)arg3 interactBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end
