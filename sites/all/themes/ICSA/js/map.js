(function($) {
    $(function(){
       

        if($("#map").length > 0)
        {
            createMap();
        }

    });

    function createMap()
    {
        var location = new google.maps.LatLng(51.5115158,-0.0942253);
        var mapOptions = {
            zoom: 16,
            center: location,
            draggable: false,   
            scrollwheel: false,
        }

        var styles = [
                          {
                            stylers:  [
                                    {   
                                        hue:'#dce4e9',
                                        saturation: -20

                                    },
                                    {
                                        gamma: 1
                                    }
                                ]
                          },
                          {
                            featureType: "road",
                            elementType: "geometry",
                            stylers: [
                              { lightness: 16 },
                              {color:"#ffffff"},
                              { visibility: "simplified" }
                            ]
                          },
                            {
                                "featureType": "road",
                                "elementType": "labels.text.stroke",
                                "stylers": [
                                    {
                                        "lightness": 20, 
                                         color:"#000000"
                                    }
                                ]
                            },
                          
                            {
                                "featureType": "road.arterial",
                                "elementType": "labels.text.fill",
                                "stylers": [
                                    {
                                        "color": "#000000"
                                    },
                                    {
                                        "lightness": 0
                                    }
                                ]
                            },
                            {
                                "featureType": "water",
                                "stylers": [
                                    {
                                        "color": "#cadbe9"
                                    },
                                    {
                                        "lightness": 0
                                    }
                                ]
                            }
                         
                    ];

          google.maps.event.addDomListener(window, 'resize', function() {
            map.setCenter(location);
        });
        var image = '/sites/all/themes/ICSA/images/marker.png';
    
        var map = new google.maps.Map($("#map").get(0),
                        mapOptions);

        var marker = new google.maps.Marker({
            position: location,
            map: map,
            icon: image,
            title: "ICSA"
        });

       marker.setMap(map,marker);
       map.setOptions({styles: styles});
    }
}(jQuery));