# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.

import pandas as pd
from pyecharts import Style, GeoLines

# Press the green button in the gutter to run the script.

data1 = pd.read_csv("E://vs//repos//最短路径//最短路径//temp1.csv", header=None, names=['city', 'country', 'lo', 'la'])
city = list(data1['city'])
country = list(data1['country'])
lo = list(data1['lo'])
la = list(data1['la'])

result = pd.DataFrame({'城市': city, '经度': la, '纬度': lo})
geo_cities_coords = {result.iloc[i]['城市']: [result.iloc[i]['经度'], result.iloc[i]['纬度']]
                     for i in range(len(result))}
style = Style(title_pos="right",
              width=1500,
              height=800)
style_geolines = style.add(is_label_show=True,
                           line_curve=0.4,
                           line_opacity=0.6,
                           geo_effect_symbol='plane',
                           geo_effect_symbolsize=10,
                           geo_effect_color='#BAD317',
                           geo_effect_traillength=0.1,
                           label_color=['#FFA500', '#FFF68F'],
                           border_color='#483D8B',
                           geo_normal_color='#708090',
                           label_formatter='{b}',
                           legend_pos='left')
geolines = GeoLines('最优路径', **style.init_style)
data = [(result.iloc[i]['城市'], result.iloc[i+1]['城市'])
        for i in range(len(result)-1)]
geolines.add(name='从{0}出发到{1}（最便宜）'.format(result.iloc[0]['城市'], result.iloc[len(result)-1]['城市']),
             data=data,
             maptype='world',
             geo_cities_coords=geo_cities_coords,
             **style_geolines)
data1 = pd.read_csv("E://vs//repos//最短路径//最短路径//temp2.csv", header=None, names=['city', 'country', 'lo', 'la'])
city = list(data1['city'])
country = list(data1['country'])
lo = list(data1['lo'])
la = list(data1['la'])

result = pd.DataFrame({'城市': city, '经度': la, '纬度': lo})
geo_cities_coords = {result.iloc[i]['城市']: [result.iloc[i]['经度'], result.iloc[i]['纬度']]
                     for i in range(len(result))}
style_geolines = style.add(is_label_show=True,
                           line_curve=0.4,
                           line_opacity=0.6,
                           geo_effect_symbol='plane',
                           geo_effect_symbolsize=10,
                           geo_effect_color='#BAD317',
                           geo_effect_traillength=0.1,
                           label_color=['#FFA500', '#FFF68F'],
                           border_color='#483D8B',
                           geo_normal_color='#708090',
                           label_formatter='{b}',
                           legend_pos='left')
data = [(result.iloc[i]['城市'], result.iloc[i+1]['城市'])
        for i in range(len(result)-1)]
geolines.add(name='从{0}出发到{1}（最快）'.format(result.iloc[0]['城市'], result.iloc[len(result)-1]['城市']),
             data=data,
             maptype='world',
             geo_cities_coords=geo_cities_coords,
             **style_geolines)
geolines.render("最优路线.html")
# See PyCharm help at https://www.jetbrains.com/help/pycharm/
