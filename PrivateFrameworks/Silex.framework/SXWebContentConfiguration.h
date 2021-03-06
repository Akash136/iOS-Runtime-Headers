/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentConfiguration : NSObject <NSMutableCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    NSString * _contentSizeCategory;
    NSLocale * _locale;
    NSString * _storeFront;
}

@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) NSString *storeFront;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })canvasSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithStoreFront:(id)arg1 locale:(id)arg2 contentSizeCategory:(id)arg3 canvasSize:(struct CGSize { double x1; double x2; })arg4 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setStoreFront:(id)arg1;
- (id)storeFront;

@end
